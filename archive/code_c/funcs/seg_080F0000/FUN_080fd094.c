// undefined FUN_080fd094(void)
// entry 0x80fd094


undefined4 FUN_080fd094(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(ushort *)(param_1 + 0xb6) = (ushort)DAT_080fd0f0;
    FUN_0801cf00(param_1);
    pcVar5 = (char *)(param_1 + 0xb4);
    *pcVar5 = *(char *)(DAT_080fd0f4 + 1);
    FUN_080127c8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((*pcVar5 < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fd0f8)) {
      FUN_08005784(param_1 + 0x74,DAT_080fd128);
    }
    else {
      FUN_08005784(param_1 + 0x74,*pcVar5 * 0x18 + DAT_080fd0fc);
    }
    if (*pcVar5 < '\x01') {
      if ((*pcVar5 == '\0') &&
         (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6100)) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        iVar4 = DAT_080fd15c;
        goto LAB_080fd152;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      iVar4 = *pcVar5 * 8 + DAT_080fd12c;
LAB_080fd152:
      *(int *)(param_1 + 0x30) = iVar4;
      *(short *)(param_1 + 0x26) = (short)DAT_080fd160;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    puVar3 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4 + DAT_080fd1f8 + DAT_080fd1fc);
    *puVar3 = *puVar3 & ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
    uVar6 = 0;
    do {
      FUN_080e3db4(param_1 + 0x54,uVar6 * 0x1c + DAT_080fd200,0,
                   ~*(byte *)(param_1 + 0xb5) << 4 | *(byte *)(param_1 + 0xb5));
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 5);
    if ((*(byte *)(DAT_080fd1f8 + DAT_080fd204) & 0xf) != 0) {
      puVar3 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4 + DAT_080fd1f8 + DAT_080fd1fc);
      *puVar3 = *puVar3 | 1 << (*(byte *)(param_1 + 0x11) & 0x1f);
      *(undefined1 *)(param_1 + 0x10) = 4;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  uVar6 = DAT_080fd290;
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080fd234 + 0x54);
    if (iVar4 < 0) {
      iVar4 = *(int *)(*DAT_080fd234 + 0x54) - *(int *)(param_1 + 0x54);
    }
    if (iVar4 < 0x2001) {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_080fd30e;
  *(ushort *)(param_1 + 0xb6) = (ushort)DAT_080fd290;
  FUN_0801cf00(param_1,uVar6);
  bVar1 = *(byte *)(DAT_080fd294 + 7);
  pbVar2 = (byte *)(param_1 + 0xb4);
  *pbVar2 = bVar1;
  if (((int)((uint)bVar1 * 0x1000000) < 0) || (*(ushort *)(param_1 + 0xb6) == uVar6)) {
    FUN_08005784(param_1 + 0x74,DAT_080fd2c4);
  }
  else {
    FUN_08005784(param_1 + 0x74,(char)*pbVar2 * 0x18 + DAT_080fd298);
  }
  if ((char)*pbVar2 < '\x01') {
    if ((*pbVar2 == 0) &&
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      iVar4 = DAT_080fd2f8;
      goto LAB_080fd2ee;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar4 = (char)*pbVar2 * 8 + DAT_080fd2c8;
LAB_080fd2ee:
    *(int *)(param_1 + 0x30) = iVar4;
    *(short *)(param_1 + 0x26) = (short)DAT_080fd2fc;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080fd30e:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_0801281c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  }
  return in_lr;
}


