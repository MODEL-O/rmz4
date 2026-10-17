// undefined FUN_08107b80(void)
// entry 0x8107b80


undefined4 FUN_08107b80(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_08107c70;
  iVar3 = DAT_08107be0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar2 = *(int *)(param_1 + 0x2c) + DAT_08107be0;
      if (*(int *)(iVar2 + 0x24) == *(byte *)(param_1 + 0xb5) + 1) {
        *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
      }
      if ((*(char *)(param_1 + 0xb7) == '\x01') &&
         (iVar3 = *(int *)(param_1 + 0x2c) + iVar3, *(int *)(iVar3 + 0x14) != 0)) {
        uVar5 = *(int *)(iVar3 + 0x44) - 1;
        if (uVar5 < 4) {
          *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + (uint)*(byte *)(uVar5 + DAT_08107be4);
          FUN_08002b10(*(undefined2 *)(uVar5 * 2 + DAT_08107be8));
        }
        else {
          *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + (uint)*(byte *)(DAT_08107c14 + 4);
          FUN_08002b10(*(undefined2 *)(DAT_08107c18 + 8));
        }
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar4 = iVar2 + DAT_08107c1c;
      iVar3 = *(int *)(iVar4 + 0x24) + -1;
      *(int *)(iVar4 + 0x24) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar4 + 0x2c) = 0;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2c) + DAT_08107c70;
      if (*(int *)(iVar3 + 0x28) == *(byte *)(param_1 + 0xb5) + 1) {
        *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x28);
      }
      if ((*(char *)(param_1 + 0xb7) == '\x01') &&
         (iVar2 = *(int *)(param_1 + 0x2c) + iVar2, *(int *)(iVar2 + 0x14) != 0)) {
        uVar5 = *(int *)(iVar2 + 0x48) - 1;
        if (uVar5 < 4) {
          *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + (uint)*(byte *)(uVar5 + DAT_08107c74);
          FUN_08002b10(*(undefined2 *)(uVar5 * 2 + DAT_08107c78));
        }
        else {
          *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + (uint)*(byte *)(DAT_08107cb4 + 4);
          FUN_08002b10(*(undefined2 *)(DAT_08107cb8 + 8));
        }
      }
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar4 = iVar2 + DAT_08107cbc;
      iVar3 = *(int *)(iVar4 + 0x28) + -1;
      *(int *)(iVar4 + 0x28) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar4 + 0x30) = 0;
      }
    }
    if (*(char *)(param_1 + 0xb4) != '\0') {
      *(uint *)(iVar2 + DAT_08107cbc + 0x68) = (uint)*(byte *)(param_1 + 0x11);
      goto LAB_08107cec;
    }
    FUN_080e8610(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x11) << 8,0);
    FUN_0801cf00(param_1,DAT_08107d04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_08107cec:
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08107d08);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


