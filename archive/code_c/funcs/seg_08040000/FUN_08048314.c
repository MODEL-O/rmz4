// undefined FUN_08048314(void)
// entry 0x8048314


undefined8 FUN_08048314(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804839c);
  iVar1 = DAT_080483a0;
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 9) = 0x1f;
    *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x7c);
    *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
    puVar7 = (undefined1 *)(iVar4 + 0x25);
    *puVar7 = 0x10;
    puVar2 = DAT_080483a4;
    *(undefined2 *)(iVar4 + 0x20) = *DAT_080483a4;
    puVar3 = DAT_080483a8;
    puVar5 = (undefined1 *)(iVar4 + 0x22);
    *puVar5 = *DAT_080483a8;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x1f;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x7c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar7 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *puVar2;
      *puVar5 = *puVar3;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x1f;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x7c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *puVar7 = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = puVar2[1];
      *puVar5 = puVar3[1];
    }
    *(int *)(iVar4 + 0x28) = param_1;
    *(int *)(iVar4 + 0x2c) = param_2;
    uVar6 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = uVar6;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar4);
}


