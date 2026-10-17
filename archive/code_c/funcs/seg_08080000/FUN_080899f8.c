// undefined FUN_080899f8(void)
// entry 0x80899f8


undefined4 FUN_080899f8(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_2c = *(undefined4 *)(param_1 + 0x54);
  local_28 = *(int *)(param_1 + 0x58) + DAT_08089ae8;
  FUN_080d0c88(1,&local_2c);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x31,param_1 + 0x54);
  uVar2 = DAT_08089af0 * *DAT_08089aec + DAT_08089af4;
  *DAT_08089aec = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 3;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d8a6c(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089af8,uVar2,0);
  FUN_080d8a6c(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089afc,uVar2,0);
  FUN_080d8a6c(&local_24,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089b00,uVar2,0);
  if (*(ushort *)(DAT_08089b04 + 0xc) <= DAT_08089b08) {
    *(ushort *)(DAT_08089b04 + 0xc) = *(ushort *)(DAT_08089b04 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08089b0c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


