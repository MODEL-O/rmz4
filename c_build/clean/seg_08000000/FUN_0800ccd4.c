// undefined FUN_0800ccd4(void)
// entry 0x800ccd4


void FUN_0800ccd4(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  uint uVar3;
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar2 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800cd1c);
    *puVar2 = (ushort)DAT_0800cd20 & *puVar2 | 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0800cd24 < *(int *)(param_1 + 0x34)) {
    uVar1 = DAT_0800cd30;
    if (uVar3 == 0x24) {
      *(undefined4 *)(param_1 + 0x4c) = DAT_0800cd28;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0x80;
      uVar1 = 0x100;
      goto LAB_0800cd76;
    }
  }
  else {
    if (0x10e0 < *(int *)(param_1 + 0x34)) {
      if (uVar3 == 0x24) {
        *(undefined4 *)(param_1 + 0x4c) = DAT_0800cd50;
        *(undefined4 *)(param_1 + 0x50) = 400;
        uVar1 = 0x80;
        *(undefined4 *)(param_1 + 0x44) = 0x80;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 0x12c0;
        *(undefined4 *)(param_1 + 0x50) = 0x280;
        uVar1 = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      goto LAB_0800cd76;
    }
    uVar1 = 0x2d0;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x40;
  uVar1 = 0x100;
LAB_0800cd76:
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}


