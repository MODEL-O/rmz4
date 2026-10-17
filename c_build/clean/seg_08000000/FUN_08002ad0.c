// undefined FUN_08002ad0(void)
// entry 0x8002ad0


undefined4 FUN_08002ad0(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  piVar1 = (int *)((param_1 & 0xffff) * 8 + DAT_08002b04);
  piVar3 = *(int **)((uint)*(ushort *)(piVar1 + 1) * 0xc + DAT_08002b00);
  if (((*piVar3 == *piVar1) && ((short)piVar3[1] != 0)) && (-1 < piVar3[1])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


