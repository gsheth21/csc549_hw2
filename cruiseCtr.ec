node cruiseCtr
  (cruise: bool;
  inc: bool;
  dec: bool;
  sensor_rotate: real)
returns
  (on: bool;
  speed: real;
  cruiseSpeed: real;
  f: real);

var
  V36_internal_rotate: real;
  V41_prev_rotate: real;
  V162_prevSpeed: real;
  V178_error: real;
  V179_prev_f: real;
  V177_f: real;

let
  on = (false -> (if cruise then (not (pre on)) else (pre on)));
  speed = (((V41_prev_rotate * 10.000000) * 60.000000) / 672.000000);
  cruiseSpeed = (if (on and (not (pre on))) then speed else (if on then ((
  V162_prevSpeed + (if inc then 1.000000 else 0.000000)) - (if dec then 
  1.000000 else 0.000000)) else V162_prevSpeed));
  f = (if on then V177_f else 0.000000);
  V36_internal_rotate = (if (not on) then sensor_rotate else (V41_prev_rotate + 
  f));
  V41_prev_rotate = (0.000000 -> (pre V36_internal_rotate));
  V162_prevSpeed = (0.000000 -> (if (pre on) then (pre cruiseSpeed) else speed)
  );
  V178_error = (cruiseSpeed - speed);
  V179_prev_f = (0.000000 -> (pre V177_f));
  V177_f = (if (((if (V178_error >= 0.000000) then V178_error else (-V178_error
  )) > 0.500000) and ((if (V178_error >= 0.000000) then V178_error else (-
  V178_error)) < (if (V179_prev_f >= 0.000000) then V179_prev_f else (-
  V179_prev_f)))) then (V179_prev_f + (0.250000 * (if (V178_error > 0.000000) 
  then 1.000000 else -1.000000))) else (if ((if (V179_prev_f >= 0.000000) then 
  V179_prev_f else (-V179_prev_f)) < 0.100000) then 0.000000 else (V179_prev_f 
  - (0.150000 * (if (V179_prev_f > 0.000000) then 1.000000 else -1.000000)))));
tel

