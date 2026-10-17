// undefined FUN_08083418(void)
// entry 0x8083418


void FUN_08083418(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = DAT_0808345c;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0808345c;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x200;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = DAT_08083460;
  *(undefined4 *)(param_1 + 0x60) = DAT_08083460;
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    uVar1 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}


