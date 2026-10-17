// undefined FUN_08094f38(void)
// entry 0x8094f38


undefined8 FUN_08094f38(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar3 = FUN_08129120((uint)bVar1,3);
    iVar4 = *(int *)(param_1 + 0x54) + ((uint)bVar1 + (uVar3 & 0xff) * -3 + -1) * -0xc00;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54);
  }
  return CONCAT44(in_lr,(uint)((*(int *)(*DAT_08094f98 + 0x54) -
                               (iVar4 + ((bVar2 >> 4 & 1) * 2 + -1) * 0x3600)) + 0x3600 < 0x6c01));
}


