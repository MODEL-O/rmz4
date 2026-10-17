// undefined FUN_080276a4(void)
// entry 0x80276a4


undefined4 FUN_080276a4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 0x80;
    *(int *)(param_3 + 0x18) = param_1 + 0x30;
    *(int *)(param_1 + 0x30) = param_3;
    *(undefined1 *)(param_1 + 0x38) = 2;
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined2 *)(param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    FUN_080275f0(param_1,param_2);
  }
  return in_lr;
}


