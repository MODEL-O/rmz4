// undefined FUN_08041c70(void)
// entry 0x8041c70


undefined4 FUN_08041c70(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    if ((int)((uint)*(byte *)(param_1 + 0x11) * 0x800 + 0xc00) < *(int *)(iVar7 + 0x5c)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0801cff0(param_1);
      bVar1 = *(byte *)(iVar7 + 10) >> 4;
      bVar5 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
      uVar6 = (uint)*(byte *)(iVar7 + 0x24);
      *(byte *)(param_1 + 0x24) = *(byte *)(iVar7 + 0x24);
      uVar4 = *(undefined4 *)(iVar7 + 0x68);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 100);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) -
                (*(byte *)(param_1 + 0x11) + 1) *
                *(short *)((uVar6 + 0x40 & 0xff) * 2 + DAT_08041d70) * 8;
        iVar7 = DAT_08041d70;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) +
                (*(byte *)(param_1 + 0x11) + 1) *
                *(short *)((uVar6 + 0x40 & 0xff) * 2 + DAT_08041d30) * 8;
        iVar7 = DAT_08041d30;
      }
      *(int *)(param_1 + 0x54) = iVar3;
      *(uint *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) -
           *(short *)(uVar6 * 2 + iVar7) * 8 * (*(byte *)(param_1 + 0x11) + 1);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08041c90);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


