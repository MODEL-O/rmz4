// undefined FUN_080a5644(void)
// entry 0x80a5644


undefined4 FUN_080a5644(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a56ec);
    FUN_0801cf00(param_1,DAT_080a56f0);
    FUN_0801d330(param_1);
    iVar3 = DAT_080a56f4;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080a56f4) << 1;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uint)bVar1 * 2 + iVar3) << 1;
    *(undefined4 *)(param_1 + 0xb4) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((((*puVar6 & 0x200) == 0) &&
      (iVar3 = *(int *)(param_1 + 0xb4) + -1, *(int *)(param_1 + 0xb4) = iVar3, iVar3 != 0)) &&
     ((*puVar6 & 4) == 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar4 = FUN_0801fb14(DAT_080a5750,param_1 + 0x54);
    if (uVar4 < 0x2001) {
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar2 == 0) {
        return in_lr;
      }
      uVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((uVar4 & 0xf) == 0xf) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  else {
    FUN_080d0c88(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a5754);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  return in_lr;
}


