// undefined FUN_080ad6c8(void)
// entry 0x80ad6c8


undefined4 FUN_080ad6c8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    iVar2 = DAT_080ad74c;
    uVar4 = (uint)bVar1 * 0x40 + (uint)*(byte *)(iVar7 + 0xb4);
    iVar6 = *(int *)(iVar7 + 0xb8);
    iVar5 = iVar6 * *(short *)((uVar4 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080ad74c);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + (iVar5 >> 8);
    iVar6 = iVar6 * *(short *)((uVar4 & 0xff) * 2 + iVar2);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + (iVar6 >> 8);
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ad6f0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080ad750(param_1);
  }
  return in_lr;
}


