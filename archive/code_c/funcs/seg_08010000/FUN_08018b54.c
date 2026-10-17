// undefined FUN_08018b54(void)
// entry 0x8018b54


undefined4 FUN_08018b54(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x38) < 0x1e1) {
      uVar2 = 0xb40;
    }
    else {
      uVar2 = 0x870;
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    puVar1 = DAT_08018ba0;
    *DAT_08018ba0 = (short)DAT_08018ba4;
    puVar1[1] = (short)DAT_08018ba8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = DAT_08018be8;
  iVar3 = DAT_08018bec;
  if (0x1e0 < *(int *)(param_1 + 0x38)) {
    iVar4 = DAT_08018bac;
    iVar3 = DAT_08018bb0;
  }
  iVar4 = (uint)*(ushort *)(iVar4 + iVar3) << 0x10;
  if (DAT_08018bf0 < iVar4 >> 0x10) {
    iVar4 = iVar4 >> 0x14;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    *(ushort *)(DAT_08018bf4 + 2) = (short)(iVar4 >> 2) + 0x10U & 0x1f | 0x1000;
  }
  return in_lr;
}


