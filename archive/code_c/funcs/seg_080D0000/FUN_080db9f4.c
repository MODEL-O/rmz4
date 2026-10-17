// undefined FUN_080db9f4(void)
// entry 0x80db9f4


undefined4 FUN_080db9f4(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080dba40);
    *(undefined1 *)(param_1 + 0x12) = 0x1c;
    *(undefined4 *)(param_1 + 0x60) = DAT_080dba44;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dba48);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080dbba4(param_1);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + DAT_080dba94);
    if (sVar2 != 0) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dba98);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080dbba4(param_1);
    }
  }
  return in_lr;
}


