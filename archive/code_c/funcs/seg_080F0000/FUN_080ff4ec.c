// undefined FUN_080ff4ec(void)
// entry 0x80ff4ec


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080ff4ec(int param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080ff584,0);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,_FUN_080ff588,param_1 + 0x54,0x78);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar1 = iVar1 + DAT_080ff5cc;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *pbVar3 = *pbVar3 & 0xdf | 0x20;
    iVar1 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar1 = iVar1 + 0x4000;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff5d0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ff134(param_1);
                    /* WARNING: Could not recover jumptable at 0x080ff5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


