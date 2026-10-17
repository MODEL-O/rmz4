// undefined FUN_08083c34(void)
// entry 0x8083c34


undefined4 FUN_08083c34(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083c64);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080839a8(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_0801cff0(param_1);
    iVar6 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar6 + DAT_08083d94;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if ((cVar2 != '\0') &&
       (sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar6 + DAT_08083d98), sVar3 == 0)) {
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083d9c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080839a8(param_1);
    return in_lr;
  }
  if (*(char *)(iVar6 + 0xd) == '\b') {
    FUN_08005784(param_1 + 0x74,DAT_08083ce0);
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_08083c90);
    iVar5 = FUN_0807f90c(iVar6);
    if (iVar5 == 0) {
      FUN_0801cff0(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  if (*(byte *)(iVar6 + 0xc) < 2) {
LAB_08083cf8:
    cVar2 = FUN_08007098(*(undefined4 *)(iVar6 + 0x54),*(int *)(iVar6 + 0x58) + DAT_08083d44);
    if (cVar2 == '\0') {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (*(char *)(iVar6 + 0xbd) != '\0') {
      if (*(char *)(iVar6 + 0xd) == '\0') {
        FUN_080eba78(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        goto LAB_08083d26;
      }
      *(undefined1 *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_08083cf8;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
LAB_08083d26:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083d48);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  return in_lr;
}


