// undefined FUN_080deaa8(void)
// entry 0x80deaa8


undefined4 FUN_080deaa8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x74);
  bVar1 = *(byte *)(param_1 + 0x78);
  FUN_0801cff0();
  cVar2 = *(char *)(param_1 + 0x12);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    iVar3 = DAT_080deb74;
    if ((byte)(cVar2 - 1U) < 0x12) {
      iVar8 = *(int *)(param_1 + 0x54) + DAT_080deb74;
      uVar4 = *DAT_080deb78 * DAT_080deb7c + DAT_080deb80;
      *DAT_080deb78 = uVar4 & 0x7fffffff;
      *(uint *)(param_1 + 0x54) = iVar8 + ((uVar4 & 0x1ffffff) >> 0x10);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    }
    else {
      iVar3 = FUN_08128fb8(iVar8 * (uint)*(byte *)(param_1 + 0x12),0x18);
      iVar8 = DAT_080deb20;
      uVar4 = (uint)bVar1 + *(int *)(param_1 + 0x5c);
      uVar7 = uVar4 & 0xff;
      iVar6 = *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_080deb20) * iVar3;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar6 >> 8);
      iVar3 = iVar3 * *(short *)(uVar7 * 2 + iVar8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
      *(byte *)(param_1 + 0x78) = (byte)uVar4;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080deb84);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_080deb88(param_1);
  }
  return in_lr;
}


