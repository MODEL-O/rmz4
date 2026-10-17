// undefined FUN_0808daa0(void)
// entry 0x808daa0


undefined8 FUN_0808daa0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = DAT_0808daf0[1];
  local_18 = *DAT_0808daf0;
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = FUN_0802adac(0,param_1,&local_18);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      FUN_0808db04(param_1);
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        uVar1 = 6;
      }
      else {
        uVar1 = 7;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}


