// undefined FUN_0805380c(void)
// entry 0x805380c


undefined4 FUN_0805380c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0xb4) = 1;
    FUN_0801cf00(param_1,0xb600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(*(int *)(param_1 + 0xc0) + 0xd) == '\x02') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


