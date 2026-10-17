// undefined FUN_0810f700(void)
// entry 0x810f700


undefined4 FUN_0810f700(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(short *)(DAT_0810f724 + 4) != 0) {
    *(undefined2 *)(param_1 + 8) = 3;
  }
  if (6 < *(byte *)(param_1 + 5)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0810f722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + DAT_0810f728))();
  return uVar1;
}


