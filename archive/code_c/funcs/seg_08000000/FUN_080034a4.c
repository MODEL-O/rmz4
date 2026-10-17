// undefined FUN_080034a4(void)
// entry 0x80034a4


void FUN_080034a4(undefined4 *param_1,int *param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(char *)((int)param_1 + 6) = *(char *)(*param_2 + 1) + '\x01';
  *(undefined1 *)((int)param_1 + 7) = 0;
  return;
}


