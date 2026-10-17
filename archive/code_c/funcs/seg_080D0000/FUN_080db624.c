// undefined FUN_080db624(void)
// entry 0x80db624


undefined4 FUN_080db624(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
    if (sVar2 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 == 0) {
      return in_lr;
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080db680);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080db758(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar4 = (uint)(bVar1 >> 5) + (uint)*(byte *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = (char)iVar4;
  uVar5 = (uint)bVar1 + iVar4;
  iVar4 = (int)*(short *)((uVar5 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080db6f4) -
          (int)*(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080db6f4);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)*(short *)((uVar5 & 0xff) * 2 + DAT_080db6f4) -
       (int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080db6f4)) * -8;
  pcVar6 = (char *)(param_1 + 0x7c);
  if (*pcVar6 == *(char *)(param_1 + 0x7d)) {
    *(byte *)(param_1 + 0x24) = bVar1;
    if (*pcVar6 == '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - (iVar4 * 0x80000 >> 0x10);
      goto LAB_080db722;
    }
  }
  else {
    *(byte *)(param_1 + 0x24) = ~bVar1;
    if (*pcVar6 != '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - (iVar4 * 0x80000 >> 0x10);
      goto LAB_080db722;
    }
  }
  iVar4 = *(int *)(param_1 + 0x54) + (iVar4 * 0x80000 >> 0x10);
LAB_080db722:
  *(int *)(param_1 + 0x54) = iVar4;
  bVar1 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x40 < bVar1) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080db754);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080db758(param_1);
  }
  return in_lr;
}


