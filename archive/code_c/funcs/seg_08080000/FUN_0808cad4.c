// undefined FUN_0808cad4(void)
// entry 0x808cad4


undefined4 FUN_0808cad4(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + DAT_0808cbd0;
    FUN_080d0dc4(0,&local_28,0x200,*(byte *)(param_1 + 0xb9));
    uVar2 = DAT_0808cbd8 * *DAT_0808cbd4 + DAT_0808cbdc;
    local_20 = ((*(byte *)(param_1 + 0xb9) + 1 & 1) * 2 + -1) *
               (((uVar2 & 0x7fffffff) >> 0x10 & 0x7f) + 0x180);
    uVar2 = DAT_0808cbd8 * (uVar2 & 0x7fffffff) + DAT_0808cbdc;
    *DAT_0808cbd4 = uVar2 & 0x7fffffff;
    local_1c = -(((uVar2 & 0x7fffffff) >> 0x10 & 0x7f) + 0x380);
    FUN_080d9cc8(param_1 + 0x54,&local_20,0,*(undefined1 *)(param_1 + 0x24));
    FUN_0801cf00(param_1,DAT_0808cbe0);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_28 = *(undefined4 *)(param_1 + 0x54);
    local_24 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0c88(1,&local_28);
    FUN_0808cdcc(param_1);
    FUN_0802ab88(3,0,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808cbe4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


