// undefined FUN_08047984(void)
// entry 0x8047984


undefined4 FUN_08047984(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar8 + 0x150) == -1) {
    *(byte *)(iVar8 + DAT_080479dc) = *(byte *)(iVar8 + DAT_080479dc) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080479e0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    FUN_0801cff0(param_1);
    bVar1 = *(byte *)(iVar8 + 10) >> 4;
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
    uVar7 = (uint)(*(char *)(iVar8 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar8 + 0x54) +
              *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + DAT_08047ac4);
      iVar6 = DAT_08047ac4;
    }
    else {
      iVar4 = *(int *)(iVar8 + 0x54) -
              *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + DAT_08047a58);
      iVar6 = DAT_08047a58;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar8 + 0x58) +
         *(int *)(uVar7 * 8 + (uint)*(byte *)(iVar8 + 0x150) * 0x10 + iVar6 + 4);
    bVar1 = *(byte *)((uint)*(byte *)(iVar8 + 0x150) + DAT_08047ac8);
    uVar7 = (uint)bVar1;
    *(byte *)(param_1 + 0x24) = bVar1;
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_18 = *(int *)(param_1 + 0x54) +
                   *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08047b4c) * -0xe;
        iVar6 = DAT_08047b4c;
      }
      else {
        local_18 = *(int *)(param_1 + 0x54) +
                   *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08047acc) * 0xe;
        iVar6 = DAT_08047acc;
      }
      local_14 = *(int *)(param_1 + 0x58) + *(short *)(uVar7 * 2 + iVar6) * -0xe;
      FUN_0804777c(iVar8,param_1,&local_18,0);
      FUN_08002b10(0x3c);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x11) {
      return in_lr;
    }
    *(byte *)(iVar8 + DAT_08047b50) = *(byte *)(iVar8 + DAT_08047b50) | 0x40;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08047b54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)(*piVar2 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}


