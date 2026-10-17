// undefined FUN_0803fe6c(void)
// entry 0x803fe6c


undefined4 FUN_0803fe6c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar3 = param_1 + 0x54;
  FUN_0803fad8(uVar2,iVar3,0);
  FUN_0803fad8(uVar2,iVar3,1);
  FUN_0803fad8(uVar2,iVar3,2);
  FUN_0803fad8(uVar2,iVar3,3);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803fed4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


