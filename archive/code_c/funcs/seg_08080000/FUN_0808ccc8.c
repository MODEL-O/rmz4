// undefined FUN_0808ccc8(void)
// entry 0x808ccc8


undefined8 FUN_0808ccc8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (*(byte *)(param_1 + 0xb4) != param_2) {
    pbVar4 = (byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_0808cd30);
    uVar1 = (uint)*pbVar4;
    uVar3 = *(byte *)(param_1 + 0xb4) - uVar1 & 0xff;
    uVar1 = param_2 - uVar1 & 0xff;
    *(byte *)(param_1 + 0xb5) = uVar3 < uVar1;
    uVar2 = uVar3 + (uint)*(byte *)(param_1 + 0xb5) * 2 + -1 & 0xff;
    if ((short)((int)(uVar2 - uVar1) >> 0x1f) == (short)((int)(uVar3 - uVar1) >> 0x1f)) {
      param_2 = uVar2 + *pbVar4 & 0xff;
    }
  }
  return CONCAT44(in_lr,param_2);
}


