// undefined FUN_080ff438(void)
// entry 0x80ff438


void FUN_080ff438(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_lr;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_080ff438;
  iVar1 = (*(code *)(in_lr + 0x312))();
  FUN_0801cc9c();
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) | 3;
  if (*(char *)(iVar1 + 0x11) == '\0') {
    FUN_0801cf00(iVar1,DAT_080ff4e4);
    uVar2 = FUN_08008534(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  }
  else {
    FUN_0801cf00(iVar1,0xaa00);
    uVar2 = FUN_08008748(*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
  }
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  FUN_0801cff0(iVar1);
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xef;
  *(undefined1 *)(iVar1 + 0x4c) = 0;
  *(byte *)(iVar1 + 0x4a) = *(byte *)(iVar1 + 0x4a) & 0xef;
  *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf3 | 4;
  *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(iVar1 + 0x58);
  piVar3 = (int *)((uint)*(byte *)(iVar1 + 9) * 4 + DAT_080ff4e8);
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080ff134(iVar1);
                    /* WARNING: Could not recover jumptable at 0x080ff4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


