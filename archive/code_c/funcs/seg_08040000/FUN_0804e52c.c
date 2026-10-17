// undefined FUN_0804e52c(void)
// entry 0x804e52c


undefined8 FUN_0804e52c(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804e5b4);
  iVar1 = DAT_0804e5b8;
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 9) = 0x35;
    puVar7 = (undefined4 *)(iVar1 + 0xd4);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
    *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
    puVar6 = (undefined1 *)(iVar4 + 0x25);
    *puVar6 = 0x10;
    puVar2 = DAT_0804e5bc;
    *(undefined2 *)(iVar4 + 0x20) = *DAT_0804e5bc;
    puVar3 = DAT_0804e5c0;
    puVar5 = (undefined1 *)(iVar4 + 0x22);
    *puVar5 = *DAT_0804e5c0;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x35;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *puVar2;
      *puVar5 = *puVar3;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x35;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)*puVar7;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar6 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = puVar2[1];
      *puVar5 = puVar3[1];
    }
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


