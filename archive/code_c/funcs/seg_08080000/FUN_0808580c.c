// undefined FUN_0808580c(void)
// entry 0x808580c


undefined4 FUN_0808580c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_080853f8();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


