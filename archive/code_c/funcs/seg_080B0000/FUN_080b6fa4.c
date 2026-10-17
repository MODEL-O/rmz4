// undefined FUN_080b6fa4(void)
// entry 0x80b6fa4


void FUN_080b6fa4(int param_1)

{
  int *piVar1;
  int unaff_r4;
  uint in_lr;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  char in_OV;
  char cVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  cVar3 = param_1 < 0;
  iVar2 = 0x80b6fab;
  (*(code *)(in_lr & 0xfffffffc))();
  UNRECOVERED_JUMPTABLE_00 = (code *)0x80b6fad;
  iVar2 = (*(code *)(iVar2 + 0xffe))();
  if (cVar3 == in_OV) {
    if (*(byte *)(*(int *)(*(int *)(iVar2 + 0x28) + 0x28) + 0xc) < 2) {
      FUN_08128f80(iVar2,*(undefined4 *)((uint)*(byte *)(iVar2 + 0xd) * 4 + DAT_080b6ff0));
    }
    else {
      piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080b6fd8);
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      FUN_080b7140(iVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x080b6fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(UNRECOVERED_JUMPTABLE_00 + 0x32a))();
  iVar2 = *(int *)(unaff_r4 + 0xb4) + -1;
  *(int *)(unaff_r4 + 0xb4) = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(unaff_r4 + 0xd) = 1;
    *(undefined1 *)(unaff_r4 + 0xe) = 0;
    *(undefined1 *)(unaff_r4 + 0xf) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x080b704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


