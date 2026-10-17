// undefined FUN_08088668(void)
// entry 0x8088668


undefined4 FUN_08088668(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar1 = DAT_08088714 * *DAT_08088710 + DAT_08088718;
  local_28 = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_08088714 * (uVar1 & 0x7fffffff) + DAT_08088718;
  *DAT_08088710 = uVar1 & 0x7fffffff;
  local_24 = *(int *)(param_1 + 0x58) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  FUN_080d0c88(1,&local_28);
  FUN_08088cd8(param_1);
  if (*(int *)(DAT_0808871c + DAT_08088720) < *(int *)(param_1 + 0x58)) {
    FUN_08002b10(0x31);
    local_20 = 0x800;
    local_1c = 0;
    FUN_08088ff0(param_1 + 0x54,&local_20,3,4);
  }
  else {
    FUN_08002b10(0x2a);
  }
  FUN_0802ab88(4,0x2f,param_1 + 0x54);
  if (*(ushort *)(DAT_0808876c + 0xc) <= DAT_08088770) {
    *(ushort *)(DAT_0808876c + 0xc) = *(ushort *)(DAT_0808876c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08088774);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


