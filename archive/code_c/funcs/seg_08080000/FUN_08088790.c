// undefined FUN_08088790(void)
// entry 0x8088790


undefined4 FUN_08088790(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10) >> 5;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_080887e0;
  FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xb6));
  if ((bVar1 & 1) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + 0x800;
    sVar2 = FUN_08007c7c();
    if (sVar2 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      uVar3 = FUN_08008534(local_1c,local_18);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xf) = bVar1 & 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_0808882c));
  return in_lr;
}


