// undefined FUN_080b6ff4(void)
// entry 0x80b6ff4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080b6ff4(int param_1)

{
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080b7050);
    FUN_0801cf00(param_1,_FUN_080b7054);
    *(uint *)(param_1 + 0xb4) = (bVar1 + 1) * 0x28;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_080b735c(param_1);
  iVar2 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x080b704c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


