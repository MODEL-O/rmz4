// undefined FUN_0808500c(void)
// entry 0x808500c


undefined4 FUN_0808500c(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08085068);
    FUN_0801cf00(param_1,DAT_0808506c);
    iVar1 = DAT_08085070;
    bVar2 = *(byte *)(param_1 + 0x11);
    uVar3 = bVar2 & 1;
    *(uint *)(param_1 + 0x5c) = uVar3 * 0x2c0 + DAT_08085070;
    *(uint *)(param_1 + 0x60) = (bVar2 >> 1 & 1) * 0x2c0 + iVar1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    pbVar6 = (byte *)(param_1 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | (byte)(uVar3 << 4);
    bVar2 = *(byte *)(param_1 + 0x11) >> 1;
    bVar5 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4d) = bVar5;
    *pbVar6 = *pbVar6 & 0xdf | bVar5 << 5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0801cff0(param_1);
  puVar7 = (uint *)(param_1 + 0x8c);
  if ((*puVar7 & 4) == 0) {
    uVar3 = FUN_0801fb14(DAT_08085164,param_1 + 0x54);
    if (uVar3 < 0x1001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  else {
    FUN_080d0c88(2,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar7 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085168);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  return in_lr;
}


