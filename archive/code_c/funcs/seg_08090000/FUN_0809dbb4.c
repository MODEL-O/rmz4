// undefined FUN_0809dbb4(void)
// entry 0x809dbb4


undefined4 FUN_0809dbb4(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar2 = *(int *)(*DAT_0809dbf0 + 0x54) < *(int *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
    if (*(char *)(param_1 + 0xbe) != '\x01') {
      FUN_080df2ec(param_1 + 0x54,1,0xff,*(byte *)(param_1 + 10) >> 4 & 1,bVar2);
      goto LAB_0809dc2e;
    }
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = 2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = 0;
  }
  FUN_080df2ec(param_1 + 0x54,uVar4,0xff,bVar1 >> 4 & 1,bVar2);
LAB_0809dc2e:
  FUN_0802ab88(4,0x1a,param_1 + 0x54);
  if (*(ushort *)(DAT_0809dc80 + 0xc) <= DAT_0809dc84) {
    *(ushort *)(DAT_0809dc80 + 0xc) = *(ushort *)(DAT_0809dc80 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809dc88);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


