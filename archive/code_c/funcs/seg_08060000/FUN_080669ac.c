// undefined FUN_080669ac(void)
// entry 0x80669ac


void FUN_080669ac(uint param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r1;
  int unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  char unaff_r7;
  uint in_lr;
  uint uVar4;
  undefined8 uVar5;
  
  if ((param_1 >> 1 & 1) == 0 || param_1 >> 2 == 0) {
    pcVar1 = (code *)(in_lr + 0xffe);
    in_lr = 0x80669b9;
    (*pcVar1)();
    param_2 = extraout_r1;
  }
  piVar2 = (int *)(((uint)UNRECOVERED_JUMPTABLE >> 10) * 0x100);
  *piVar2 = unaff_r4;
  piVar2 = piVar2 + 1;
  uVar4 = 0x80669c3;
  uVar5 = (*(code *)((in_lr & 0xfffffffc) + 0x160))(piVar2,param_2,piVar2);
  iVar3 = (*(code *)((uVar4 & 0xfffffffc) + 0x220))
                    ((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar5 << 8);
  *(char *)(unaff_r4 + 0xde) = unaff_r7 << 6;
  FUN_08128f80(unaff_r4,*(undefined4 *)((uint)*(byte *)(unaff_r4 + 0xd) * 4 + DAT_080669e8),
               iVar3 << 8);
                    /* WARNING: Could not recover jumptable at 0x080669e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


