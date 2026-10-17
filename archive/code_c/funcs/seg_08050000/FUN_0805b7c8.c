// undefined FUN_0805b7c8(void)
// entry 0x805b7c8


undefined4 FUN_0805b7c8(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0805b8f2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805b834);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805b838) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    pbVar4 = (byte *)(param_1 + 0xbe);
    if (*pbVar4 == 0xff) {
      iVar5 = FUN_0805c3a8(param_1);
      bVar1 = *(int *)(param_1 + 0x54) < iVar5 + 0x7800;
    }
    else {
      bVar1 = *pbVar4;
    }
    *pbVar4 = 0xff;
    *(byte *)(param_1 + 0x4c) = bVar1 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar1 & 1) << 4;
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if (bVar1 == 0) {
      iVar5 = FUN_0805c3a8(param_1);
      iVar5 = iVar5 + 0xd000;
    }
    else {
      iVar5 = FUN_0805c3a8(param_1);
      iVar5 = iVar5 + 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805b8e4;
    *(undefined4 *)(param_1 + 0x60) = 0x400;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + DAT_0805b8e8;
    *(undefined4 *)(param_1 + 100) = 0x4200;
    *(undefined1 *)(param_1 + 0x12) = 0x21;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805b8f2:
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    FUN_0805bf8c(param_1);
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  }
  return in_lr;
}


