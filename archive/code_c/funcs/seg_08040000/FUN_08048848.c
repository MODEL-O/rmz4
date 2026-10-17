// undefined FUN_08048848(void)
// entry 0x8048848


undefined4 FUN_08048848(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  bVar1 = 0;
  do {
    FUN_08048314(uVar3,param_1,bVar1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 8);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048898);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


