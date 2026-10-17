// undefined FUN_08086894(void)
// entry 0x8086894


undefined4 FUN_08086894(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  iVar1 = FUN_08086b14();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_10 = (*(uint *)(param_1 + 0x54) & DAT_08086914) + 0x800;
    local_c = (*(uint *)(param_1 + 0x58) & DAT_08086914) + 0x800;
    FUN_0802ab88(7,0x14,&local_10);
    if (*(ushort *)(DAT_08086918 + 0xc) <= DAT_0808691c) {
      *(ushort *)(DAT_08086918 + 0xc) = *(ushort *)(DAT_08086918 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086920);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


