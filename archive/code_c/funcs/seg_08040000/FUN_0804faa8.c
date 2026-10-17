// undefined FUN_0804faa8(void)
// entry 0x804faa8


undefined4 FUN_0804faa8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 < 9) && (pbVar2 = (byte *)(iVar8 + 0x150), *pbVar2 != 0xff)) {
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
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
        iVar4 = *(int *)(iVar8 + 0x54) + *(int *)(uVar7 * 8 + (uint)*pbVar2 * 0x10 + DAT_0804fbec);
        iVar6 = DAT_0804fbec;
      }
      else {
        iVar4 = *(int *)(iVar8 + 0x54) - *(int *)(uVar7 * 8 + (uint)*pbVar2 * 0x10 + DAT_0804fbbc);
        iVar6 = DAT_0804fbbc;
      }
      *(int *)(param_1 + 0x54) = iVar4;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar8 + 0x58) + *(int *)(uVar7 * 8 + (uint)*pbVar2 * 0x10 + iVar6 + 4);
    }
    else {
      *(byte *)(iVar8 + DAT_0804fb48) = *(byte *)(iVar8 + DAT_0804fb48) | 0x40;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804fb4c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    }
  }
  else {
    *(byte *)(iVar8 + DAT_0804fb10) = *(byte *)(iVar8 + DAT_0804fb10) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804fb14);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


