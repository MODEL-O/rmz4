// undefined FUN_08079b70(void)
// entry 0x8079b70


undefined4 FUN_08079b70(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
  }
  if (5 < *(byte *)(param_1 + 0xe)) {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xdb) == '\0') {
      FUN_0801d330(param_1);
    }
    else {
      FUN_0801d3fc(param_1);
      *(char *)(param_1 + 0xdb) = '\0';
      if ((3 < *(byte *)(param_1 + 0xe)) && (0xd < *(byte *)(param_1 + 0x13))) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0xc;
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0xc;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x400;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x08079b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(PTR_PTR_08079b9c + (uint)*(byte *)(param_1 + 0xe) * 4))();
  return uVar1;
}


