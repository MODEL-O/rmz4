// undefined FUN_0808b138(void)
// entry 0x808b138


undefined8 FUN_0808b138(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = *DAT_0808b190;
  local_20[1] = DAT_0808b190[1];
  local_20[2] = DAT_0808b190[2];
  local_20[3] = DAT_0808b190[3];
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = FUN_0802adac(0,param_1,local_20 + (uint)*(byte *)(param_1 + 0xc0) * 2);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        uVar1 = 0xc;
      }
      else {
        uVar1 = 0xd;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}


