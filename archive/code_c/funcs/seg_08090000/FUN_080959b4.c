// undefined FUN_080959b4(void)
// entry 0x80959b4


undefined4 FUN_080959b4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xbb);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(byte *)(param_1 + 0x12) = (bVar1 >> 4 & 1) * 'h' + '\f';
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = DAT_08095ac0;
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar6 = *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_08095ac0) * iVar7;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar6 >> 8);
  iVar3 = iVar7 * *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar3);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  iVar7 = iVar7 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar7;
  if (0x380 < iVar7) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar3 = FUN_0805c3a8(uVar2);
    if (0xc000 < (iVar3 - *(int *)(param_1 + 0x54)) + 0xd800U) {
      *(undefined1 *)(param_1 + 0x12) = 0xc0;
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
  }
  FUN_08095cd8(param_1);
  uVar4 = FUN_0801fb14(DAT_08095ac4,param_1 + 0x54);
  if (0x3000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08095ac8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  }
  return in_lr;
}


