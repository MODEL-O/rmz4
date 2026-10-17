// undefined FUN_0801ffe0(void)
// entry 0x801ffe0


undefined8 FUN_0801ffe0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  piVar1 = DAT_08020038;
  uVar4 = (uint)*(ushort *)((int)DAT_08020038 + 0xd6);
  iVar2 = *DAT_08020038;
  piVar3 = DAT_08020038;
  while (iVar2 != 0) {
    if ((int)uVar4 < *piVar3 * 0x100) {
      uVar4 = *piVar3 * 0x100;
    }
    piVar3 = piVar3 + 3;
    iVar2 = *piVar3;
  }
  if (0x2000 < (int)uVar4) {
    uVar4 = 0x2000;
  }
  *(short *)((int)DAT_08020038 + 0xd6) = (short)((int)(uVar4 * 0xf) >> 4);
  *(undefined2 *)(piVar1 + 0x35) = 0;
  *piVar1 = 0;
  return CONCAT44(in_lr,(int)uVar4 >> 8);
}


