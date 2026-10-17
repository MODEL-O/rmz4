// undefined FUN_080a185c(void)
// entry 0x80a185c


undefined4 FUN_080a185c(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  cVar1 = *(char *)(param_1 + 0x10);
  FUN_08002b10(0x2a);
  uVar2 = DAT_080a1934 * *DAT_080a1930 + DAT_080a1938;
  local_20 = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar2 = DAT_080a1934 * (uVar2 & 0x7fffffff) + DAT_080a1938;
  *DAT_080a1930 = uVar2 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  FUN_080d0c88(1,&local_20);
  FUN_080a1cac(param_1);
  FUN_0802ab88(4,5,param_1 + 0x54);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(DAT_080a193c + 0x26);
    if (cVar1 != '\0') {
      *(char *)(DAT_080a193c + 0x26) = cVar1 + -1;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(ushort *)(DAT_080a1940 + 0xc) <= DAT_080a1944) {
    *(ushort *)(DAT_080a1940 + 0xc) = *(ushort *)(DAT_080a1940 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a1948);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


