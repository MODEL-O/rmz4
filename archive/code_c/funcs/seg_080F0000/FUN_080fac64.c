// undefined FUN_080fac64(void)
// entry 0x80fac64


undefined4 FUN_080fac64(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar3 = *(int *)(param_1 + 0x2c);
    if ((*(char *)(iVar2 + 8) == '\x03') && (*(char *)(iVar2 + 9) == 'B')) {
      piVar1 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_080fac9c);
      *(undefined4 *)(iVar3 + 0xc) = 2;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    }
  }
  return in_lr;
}


