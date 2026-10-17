// undefined FUN_08041a94(void)
// entry 0x8041a94


undefined4 FUN_08041a94(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x2c);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') goto LAB_08041bac;
    FUN_08002b10(0x37);
    FUN_08005794(param_1 + 0x74,DAT_08041b50,0xffffffff,0xffffffff,0xffffffff,
                 *(undefined1 *)(param_1 + 0x12));
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 6) goto LAB_08041bac;
    FUN_0801cf00(param_1,DAT_08041b54);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  else {
    if (1 < bVar1) {
      if ((bVar1 == 2) &&
         (iVar3 = *(int *)(param_1 + 0x5c) + DAT_08041ba0, *(int *)(param_1 + 0x5c) = iVar3,
         iVar3 <= DAT_08041ba4)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08041ba8);
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
        return in_lr;
      }
      goto LAB_08041bac;
    }
    if ((bVar1 != 0) ||
       (iVar3 = *(int *)(param_1 + 0x5c) + 0x600, *(int *)(param_1 + 0x5c) = iVar3, iVar3 < 0x2c01))
    goto LAB_08041bac;
    *(undefined4 *)(param_1 + 0x5c) = 0x2c00;
    FUN_0801cf00(param_1,DAT_08041aec);
    FUN_08005794(param_1 + 0x74,DAT_08041af0,0xffffffff,0xffffffff,0xffffffff,1);
    *(undefined1 *)(param_1 + 0x12) = 2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08041bac:
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
  uVar7 = (uint)*(byte *)(iVar8 + 0x24);
  *(byte *)(param_1 + 0x24) = *(byte *)(iVar8 + 0x24);
  uVar4 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar4 = *(undefined4 *)(iVar8 + 0x58);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54) -
            (iVar6 * *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08041c6c) >> 8);
    iVar8 = DAT_08041c6c;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54) +
            (iVar6 * *(short *)((uVar7 + 0x40 & 0xff) * 2 + DAT_08041c2c) >> 8);
    iVar8 = DAT_08041c2c;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (iVar6 * *(short *)(uVar7 * 2 + iVar8) >> 8)
  ;
  return in_lr;
}


