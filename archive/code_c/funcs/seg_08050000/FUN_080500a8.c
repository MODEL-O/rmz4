// undefined FUN_080500a8(void)
// entry 0x80500a8


undefined4 FUN_080500a8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar7 + 0x150) == -1) {
    *(byte *)(iVar7 + DAT_08050100) = *(byte *)(iVar7 + DAT_08050100) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08050104);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 9) {
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        FUN_0801cff0(param_1);
        bVar1 = *(byte *)(iVar7 + 10) >> 4;
        bVar4 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(byte *)(param_1 + 0x4c) = bVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
        uVar6 = (uint)(*(char *)(iVar7 + 0x71) == '\x03');
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(iVar7 + 0x54) +
                  *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_08050254);
          iVar5 = DAT_08050254;
        }
        else {
          iVar3 = *(int *)(iVar7 + 0x54) -
                  *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + DAT_0805021c);
          iVar5 = DAT_0805021c;
        }
        *(int *)(param_1 + 0x54) = iVar3;
        *(int *)(param_1 + 0x58) =
             *(int *)(iVar7 + 0x58) +
             *(int *)(uVar6 * 8 + (uint)*(byte *)(iVar7 + 0x150) * 0x10 + iVar5 + 4);
      }
      else {
        *(uint *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(byte *)(iVar7 + DAT_080501a0) = *(byte *)(iVar7 + DAT_080501a0) | 0x40;
        piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080501a4);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(iVar7 + DAT_08050154) = *(byte *)(iVar7 + DAT_08050154) | 0x40;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08050158);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}


