// undefined FUN_0806dafc(void)
// entry 0x806dafc


undefined4 FUN_0806dafc(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x4b);
  }
  pcVar6 = (char *)(param_1 + 0xcc);
  if (*pcVar6 == '\0') {
    if (*(short *)(DAT_0806db94 + DAT_0806db98) == 1) {
      FUN_0800249c(0x78,0x2c0);
      *pcVar6 = '\x01';
    }
    if (*pcVar6 != '\0') goto LAB_0806db3a;
  }
  else {
LAB_0806db3a:
    FUN_080025d8(0x78);
  }
  puVar2 = (uint *)(param_1 + 0x8c);
  if ((((*puVar2 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)*(ushort *)(DAT_0806db9c + 8) & 8, (*(ushort *)(DAT_0806db9c + 8) & 8) == 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0806dba0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    if ((*puVar2 & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    FUN_0806ed8c(param_1);
    return in_lr;
  }
  if ((*puVar2 & 1) == 0) {
LAB_0806dbce:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0806dbe0;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar4 = FUN_0802adac(0x15,param_1,DAT_0806dbf8);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    goto LAB_0806dbce;
  }
  iVar5 = FUN_0802b3e4();
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0806dbe0:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0806dbfc));
  return in_lr;
}


