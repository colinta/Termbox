
const char *linux_keys[22][8] = [
// none      shift     alt       shft+alt   ctrl    ctrl+shft  alt+ctrl alt+sh+ctrl
  { '^[[[A' , '^[[25~',        0,        0,        0,        0,        0,        0 }, // f1
  { '^[[[B' , '^[[26~',        0,        0,        0,        0,        0,        0 }, // f2
  { '^[[[C' , '^[[28~',        0,        0,        0,        0,        0,        0 }, // f3
  { '^[[[D' , '^[[29~',        0,        0,        0,        0,        0,        0 }, // f4
  { '^[[[E' , '^[[31~',        0,        0,        0,        0,        0,        0 }, // f5
  { '^[[17~', '^[[32~',        0,        0,        0,        0,        0,        0 }, // f6
  { '^[[18~', '^[[33~',        0,        0,        0,        0,        0,        0 }, // f7
  { '^[[19~', '^[[34~',        0,        0,        0,        0,        0,        0 }, // f8
  { '^[[20~',        0,        0,        0,        0,        0,        0,        0 }, // f9
  { '^[[21~',        0,        0,        0,        0,        0,        0,        0 }, // f10
  { '^[[23~',        0,        0,        0,        0,        0,        0,        0 }, // f11
  { '^[[24~',        0,        0,        0,        0,        0,        0,        0 }, // f12
  { '^[[1~' ,        0,        0,        0,        0,        0,        0,        0 }, // home
  { '^[[2~' ,        0,        0,        0,        0,        0,        0,        0 }, // ins
  { '^[[3~' ,        0,        0,        0,        0,        0,        0,        0 }, // del
  { '^[[4~' ,        0,        0,        0,        0,        0,        0,        0 }, // end
  { '^[[5~' ,        0,        0,        0,        0,        0,        0,        0 }, // pageup
  { '^[[6~' ,        0,        0,        0,        0,        0,        0,        0 }, // pagedn
  { '^[[A'  ,        0,        0,        0,        0,        0,        0,        0 }, // up
  { '^[[B'  ,        0,        0,        0,        0,        0,        0,        0 }, // down
  { '^[[C'  ,        0,        0,        0,        0,        0,        0,        0 }, // right
  { '^[[D'  ,        0,        0,        0,        0,        0,        0,        0 }  // left
];

const char *urxvt_keys[22][7] = [
// none       shift      alt       shft+alt   ctrl     ctrl+shft  alt+ctrl alt+sh+ctrl
  { '^[[11~', /*f11*/0, '^[^[[11~',        0, '^[[11^',        0,         0,        0 }, // f1
  { '^[[12~', /*f12*/0, '^[^[[12~',        0, '^[[12^',        0,         0,        0 }, // f2
  { '^[[13~', '^[[25~', '^[^[[13~',        0, '^[[13^', '^[[25^',         0,        0 }, // f3
  { '^[[14~', '^[[26~', '^[^[[14~',        0, '^[[14^', '^[[26^',         0,        0 }, // f4
  { '^[[15~', '^[[28~', '^[^[[15~',        0, '^[[15^', '^[[28^',         0,        0 }, // f5
  { '^[[17~', '^[[29~', '^[^[[17~',        0, '^[[17^', '^[[29^',         0,        0 }, // f6
  { '^[[18~', '^[[31~', '^[^[[18~',        0, '^[[18^', '^[[31^',         0,        0 }, // f7
  { '^[[19~', '^[[32~', '^[^[[19~',        0, '^[[19^', '^[[32^',         0,        0 }, // f8
  { '^[[20~', '^[[33~', '^[^[[20~',        0, '^[[20^', '^[[33^',         0,        0 }, // f9
  { '^[[21~', '^[[34~', '^[^[[21~',        0, '^[[21^', '^[[34^',         0,        0 }, // f10
  { '^[[23~', '^[[23$', '^[^[[23~',        0, '^[[23^', '^[[23@',         0,        0 }, // f11
  { '^[[24~', '^[[24$', '^[^[[24~',        0, '^[[24^', '^[[24@',         0,        0 }, // f12
  { '^[[2~' , '^[[7$' , '^[^[[7~' ,        0, '^[[7^' , '^[[7@' , '^[^[[7^', '^[^[[7@'}, // home
  { '^[[3~' , '^[[2$' , '^[^[[2~' ,        0, '^[[2^' , '^[[2@' , '^[^[[2^', '^[^[[2@'}, // ins
  { '^[[5~' , '^[[3$' , '^[^[[3~' ,        0, '^[[3^' , '^[[3@' , '^[^[[3^', '^[^[[3@'}, // del
  { '^[[6~' , '^[[8$' , '^[^[[8~' ,        0, '^[[8^' , '^[[8@' , '^[^[[8^', '^[^[[8@'}, // end
  { '^[[7~' , '^[[5$' , '^[^[[5~' ,        0, '^[[5^' , '^[[5@' , '^[^[[5^', '^[^[[5@'}, // pageup
  { '^[[8~' , '^[[6$' , '^[^[[6~' ,        0, '^[[6^' , '^[[6@' , '^[^[[6^', '^[^[[6@'}, // pagedn
  { '^[[A'  , '^[[a'  , '^[^[[A'  ,        0, '^[Oa'  , /*s+k*/0, '^[^[Oa' , '^[^[[a' }, // up
  { '^[[B'  , '^[[b'  , '^[^[[B'  ,        0, '^[Ob'  , /*s+k*/0, '^[^[Ob' , '^[^[[b' }, // down
  { '^[[C'  , '^[[c'  , '^[^[[C'  ,        0, '^[Oc'  , /*s+k*/0, '^[^[Oc' , '^[^[[c' }, // right
  { '^[[D'  , '^[[d'  , '^[^[[D'  ,        0, '^[Od'  , /*s+k*/0, '^[^[Od' , '^[^[[d' }  // left
];

// TODO: verify ctrl+keys and arrows
const char *mrxvt_keys[22][7] = [
// none      shift      alt        shft+alt    ctrl    ctrl+shft  alt+ctrl alt+sh+ctrl
  { '^[OP' :, /*f11*/0, '^[^[OP'  ,        0,        0,        0,         0,        0 }, // f1
  { '^[OQ' :, /*f12*/0, '^[^[OQ'  ,        0,        0,        0,         0,        0 }, // f2
  { '^[OR' :, '^[[25~', '^[^[OR'  ,        0,        0, '^[[25^',         0,        0 }, // f3
  { '^[OS' :, '^[[26~', '^[^[OS'  ,        0,        0, '^[[26^',         0,        0 }, // f4
  { '^[[15~', '^[[28~', '^[^[[15~',        0,        0, '^[[28^',         0,        0 }, // f5
  { '^[[17~', '^[[29~', '^[^[[17~',        0,        0, '^[[29^',         0,        0 }, // f6
  { '^[[18~', '^[[31~', '^[^[[18~',        0,        0, '^[[31^',         0,        0 }, // f7
  { '^[[19~', '^[[32~', '^[^[[19~',        0,        0, '^[[32^',         0,        0 }, // f8
  { '^[[20~', '^[[33~', '^[^[[20~',        0,        0, '^[[33^',         0,        0 }, // f9
  { '^[[21~', '^[[34~', '^[^[[21~',        0,        0, '^[[34^',         0,        0 }, // f10
  { '^[[23~', '^[[23$', '^[^[[23~',        0,        0, '^[[23@',         0,        0 }, // f11
  { '^[[24~', '^[[24$', '^[^[[24~',        0,        0, '^[[24@',         0,        0 }, // f12
  { '^[[7~' ,        0, '^[^[[7~' ,        0, '^[[7^' , '^[[7@' , '^[^[[7^', '^[^[[7@'}, // home
  { '^[[2~' , '^[[3~' , '^[^[[2~' ,        0, '^[[2^' , '^[[2@' , '^[^[[2^', '^[^[[2@'}, // ins
  { '^[[3~' , '^[[3$' , '^[^[[3~' ,        0, '^[[3^' , '^[[3@' , '^[^[[3^', '^[^[[3@'}, // del
  { '^[[8~' ,        0, '^[^[[8~' ,        0, '^[[8^' , '^[[8@' , '^[^[[8^', '^[^[[8@'}, // end
  { '^[[5~' ,        0, '^[^[[5~' ,        0, '^[[5^' , '^[[5@' , '^[^[[5^', '^[^[[5@'}, // pageup
  { '^[[6~' ,        0, '^[^[[6~' ,        0, '^[[6^' , '^[[6@' , '^[^[[6^', '^[^[[6@'}, // pagedn
  { '^[[A'  , '^[[a'  , '^[^[[A'  ,        0, '^[Oa'  , /*s+k*/0, '^[^[Oa' , '^[^[[a' }, // up
  { '^[[B'  , '^[[b'  , '^[^[[B'  ,        0, '^[Ob'  , /*s+k*/0, '^[^[Ob' , '^[^[[b' }, // down
  { '^[[C'  , '^[[c'  , '^[^[[C'  ,        0, '^[Oc'  , /*s+k*/0, '^[^[Oc' , '^[^[[c' }, // right
  { '^[[D'  , '^[[d'  , '^[^[[D'  ,        0, '^[Od'  , /*s+k*/0, '^[^[Od' , '^[^[[d' }  // left
];

const char *xterm_keys[22][7] = [
// none       shift       alt       shft+alt    ctrl      ctrl+shft   alt+ctrl  alt+sh+ctrl
  { '^[OP' :,'^[[1;2P' , '^[[1;3P' ,        0,'^[[1;5P' , '^[[1;6P' ,         0,         0}, // f1
  { '^[OQ' :,'^[[1;2Q' , '^[[1;3Q' ,        0,'^[[1;5Q' , '^[[1;6Q' ,         0,         0}, // f2
  { '^[OR' :,'^[[1;2R' , '^[[1;3R' ,        0,'^[[1;5R' , '^[[1;6R' ,         0,         0}, // f3
  { '^[OS' :,'^[[1;2S' , '^[[1;3S' ,        0,'^[[1;5S' , '^[[1;6S' ,         0,         0}, // f4
  { '^[[15~','^[[15;2~', '^[[15;3~',        0,'^[[15;5~', '^[[15;6~',         0,         0}, // f5
  { '^[[17~','^[[17;2~', '^[[17;3~',        0,'^[[17;5~', '^[[17;6~',         0,         0}, // f6
  { '^[[18~','^[[18;2~', '^[[18;3~',        0,'^[[18;5~', '^[[18;6~',         0,         0}, // f7
  { '^[[19~','^[[19;2~', '^[[19;3~',        0,'^[[19;5~', '^[[19;6~',         0,         0}, // f8
  { '^[[20~','^[[20;2~', '^[[20;3~',        0,'^[[20;5~', '^[[20;6~',         0,         0}, // f9
  { '^[[21~','^[[21;2~', '^[[21;3~',        0,'^[[21;5~', '^[[21;6~',         0,         0}, // f10
  { '^[[23~','^[[23;2~', '^[[23;3~',        0,'^[[23;5~', '^[[23;6~',         0,         0}, // f11
  { '^[[24~','^[[24;2~', '^[[24;3~',        0,'^[[24;5~', '^[[24;6~',         0,         0}, // f12
  { '^[[H~' ,'^[[1;2H' , '^[[1;3H' ,        0, '^[[1;5H', '^[[1;6H' , '^[[1;7H', '^[[1;8H'}, // home
  { '^[[2~' ,        0 , '^[[2;3~' ,        0, '^[[2;5~',          0, '^[[2;7~',         0}, // ins
  { '^[[3~' ,'^[[3;2~' , '^[[3;3~' ,        0, '^[[3;5~', '^[[3;6~' , '^[[3;7~', '^[[3;8~'}, // del
  { '^[[F~' ,'^[[1;2F' , '^[[1;3F' ,        0, '^[[1;5F', '^[[1;6F' , '^[[1;7F', '^[[1;8F'}, // end
  { '^[[5~' ,        0 , '^[[5;3~' ,        0, '^[[5;5~', '^[[5@'   , '^[[5;7~',         0}, // pageup
  { '^[[6~' ,        0 , '^[[6;3~' ,        0, '^[[6;5~', '^[[6@'   , '^[[6;7~',         0}, // pagedn
  { '^[[A'  ,'^[[1;2A' , '^[[1;3A' ,        0, '^[[1;5A', '^[[1;6A' , '^[[1;7A', '^[[1;8A'}, // up
  { '^[[B'  ,'^[[1;2B' , '^[[1;3B' ,        0, '^[[1;5B', '^[[1;6B' , '^[[1;7B', '^[[1;8B'}, // down
  { '^[[C'  ,'^[[1;2C' , '^[[1;3C' ,        0, '^[[1;5C', '^[[1;6C' , '^[[1;7C', '^[[1;8C'}, // right
  { '^[[D'  ,'^[[1;2D' , '^[[1;3D' ,        0, '^[[1;5D', '^[[1;6D' , '^[[1;7D', '^[[1;8D'}  // left
];

// same as xterm actually
const char *xfce4_term_keys[22][7] = [
// none        shift        alt      shft+alt    ctrl     ctrl+shft  alt+ctrl  alt+sh+ctrl
  { '^[OP' :,'^[[1;2P' , '^[[1;3P' ,        0,'^[[1;5P' , '^[[1;6P' ,         0,         0}, // f1
  { '^[OQ' :,'^[[1;2Q' , '^[[1;3Q' ,        0,'^[[1;5Q' , '^[[1;6Q' ,         0,         0}, // f2
  { '^[OR' :,'^[[1;2R' , '^[[1;3R' ,        0,'^[[1;5R' , '^[[1;6R' ,         0,         0}, // f3
  { '^[OS' :,'^[[1;2S' , '^[[1;3S' ,        0,'^[[1;5S' , '^[[1;6S' ,         0,         0}, // f4
  { '^[[15~','^[[15;2~', '^[[15;3~',        0,'^[[15;5~', '^[[15;6~',         0,         0}, // f5
  { '^[[17~','^[[17;2~', '^[[17;3~',        0,'^[[17;5~', '^[[17;6~',         0,         0}, // f6
  { '^[[18~','^[[18;2~', '^[[18;3~',        0,'^[[18;5~', '^[[18;6~',         0,         0}, // f7
  { '^[[19~','^[[19;2~', '^[[19;3~',        0,'^[[19;5~', '^[[19;6~',         0,         0}, // f8
  { '^[[20~','^[[20;2~', '^[[20;3~',        0,'^[[20;5~', '^[[20;6~',         0,         0}, // f9
  { '^[[21~','^[[21;2~', '^[[21;3~',        0,'^[[21;5~', '^[[21;6~',         0,         0}, // f10
  { '^[[23~','^[[23;2~', '^[[23;3~',        0,'^[[23;5~', '^[[23;6~',         0,         0}, // f11
  { '^[[24~','^[[24;2~', '^[[24;3~',        0,'^[[24;5~', '^[[24;6~',         0,         0}, // f12
  { '^[[H~' ,'^[[1;2H' , '^[[1;3H' ,        0, '^[[1;5H', '^[[1;6H' , '^[[1;7H', '^[[1;8H'}, // home
  { '^[[2~' ,        0 , '^[[2;3~' ,        0, '^[[2;5~',          0, '^[[2;7~',         0}, // ins
  { '^[[3~' ,'^[[3;2~' , '^[[3;3~' ,        0, '^[[3;5~', '^[[3;6~' , '^[[3;7~', '^[[3;8~'}, // del
  { '^[[F~' ,'^[[1;2F' , '^[[1;3F' ,        0, '^[[1;5F', '^[[1;6F' , '^[[1;7F', '^[[1;8F'}, // end
  { '^[[5~' ,        0 , '^[[5;3~' ,        0, '^[[5;5~', '^[[5@'   , '^[[5;7~',         0}, // pageup
  { '^[[6~' ,        0 , '^[[6;3~' ,        0, '^[[6;5~', '^[[6@'   , '^[[6;7~',         0}, // pagedn
  { '^[[A'  ,'^[[1;2A' , '^[[1;3A' ,        0, '^[[1;5A', '^[[1;6A' , '^[[1;7A', '^[[1;8A'}, // up
  { '^[[B'  ,'^[[1;2B' , '^[[1;3B' ,        0, '^[[1;5B', '^[[1;6B' , '^[[1;7B', '^[[1;8B'}, // down
  { '^[[C'  ,'^[[1;2C' , '^[[1;3C' ,        0, '^[[1;5C', '^[[1;6C' , '^[[1;7C', '^[[1;8C'}, // right
  { '^[[D'  ,'^[[1;2D' , '^[[1;3D' ,        0, '^[[1;5D', '^[[1;6D' , '^[[1;7D', '^[[1;8D'}  // left
];
