// undefined FUN_080747b0(void)
// entry 0x80747b0


undefined4 FUN_080747b0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080747dc);
    if (*(char *)(param_1 + 0xe2) == '\0') {
      uVar1 = 0x200;
    }
    else {
      uVar1 = 0xfe00;
    }
    *(undefined2 *)(param_1 + 200) = uVar1;
    *(undefined2 *)(param_1 + 0xca) = uVar1;
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 200);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)(PTR_DAT_08074854 + (uint)*pbVar3 * 2) * 4;
  *pbVar3 = *pbVar3 + 1;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 200) + *(short *)(param_1 + 0xc4);
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xca) + *(short *)(param_1 + 0xc6);
  if (4 < *(byte *)(param_1 + 0xf)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08074850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(PTR_PTR_08074858 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar2;
}


