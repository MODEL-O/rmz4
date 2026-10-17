// undefined FUN_08049d3c(void)
// entry 0x8049d3c


undefined4 FUN_08049d3c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    iVar2 = param_1 + 0x54;
    FUN_080d0c88(1,iVar2);
    FUN_08002b10(0x35);
    FUN_08049738(*(undefined4 *)(param_1 + 0x28),iVar2,0);
    FUN_08049738(*(undefined4 *)(param_1 + 0x28),iVar2,1);
    FUN_08049738(*(undefined4 *)(param_1 + 0x28),iVar2,2);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049db4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


