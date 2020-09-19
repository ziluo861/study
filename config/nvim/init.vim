let has_machine_specific_file = 1
if empty(glob('~/.config/nvim/_machine_specific.vim'))
	let has_machine_specific_file = 0
	silent! exec "!cp ~/.config/nvim/default_configs/_machine_specific_default.vim ~/.config/nvim/_machine_specific.vim"
endif
if has_machine_specific_file == 0
	exec "e ~/.config/nvim/_machine_specific.vim"
endif
source ~/.config/nvim/_machine_specific.vim
let g:python_host_prog='/usr/bin/python2'
let g:python3_host_prog='/usr/bin/python3'
set foldmethod=indent
set foldlevel=99
set foldenable
set formatoptions-=tc
set splitright
set splitbelow
set lazyredraw
set inccommand=nosplit
set scrolloff=4
set autochdir
let &t_ut=''
set hlsearch
"set cmdheight=3
set hidden
set updatetime=100
set shortmess+=c
let mapleader=" "
exec "nohlsearch"
noremap ; :
noremap <silent> <LEADER><CR> :nohlsearch<CR>
set backspace=2
"syntax on
set relativenumber
"set ruler
set scrolloff=4
set showmode
set nu
"set bg=dark
"set fileformats=unix,dos
"set fileformat=unix
set noexpandtab
set tabstop=4
set shiftwidth=4
set softtabstop=4
set autoindent 
set smartindent
set cindent
"set fileencoding=utf-8
set encoding=utf-8
set showmatch 
set signcolumn=yes
set matchtime=2 
set ignorecase
set incsearch
set wrap
set clipboard=unnamedplus
set wildmenu
set showcmd
set smartcase
au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
set virtualedit=block
"filetype plugin on
"filetype indent on
"filetype off                  " required
"filetype plugin indent on
set cursorline
"set colorcolumn=100
"set updatetime=100
"set virtualedit=block

set cursorcolumn
"set nocompatible              " be iMproved, required



"rainbow

let g:rainbow_conf = {
\	'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick'],
\	'ctermfgs': ['lightblue', 'lightyellow', 'lightcyan', 'lightmagenta'],
\	'guis': [''],
\	'cterms': [''],
\	'operators': '_,_',
\	'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/{/ end=/}/ fold'],
\	'separately': {
\		'*': {},
\		'markdown': {
\			'parentheses_options': 'containedin=markdownCode contained',
\		},
\		'lisp': {
\			'guifgs': ['royalblue3', 'darkorange3', 'seagreen3', 'firebrick', 'darkorchid3'], 
\		},
\		'haskell': {
\			'parentheses': ['start=/(/ end=/)/ fold', 'start=/\[/ end=/\]/ fold', 'start=/\v\{\ze[^-]/ end=/}/ fold'], 
\		},
\		'vim': {
\			'parentheses_options': 'containedin=vimFuncBody', 
\		},
\		'perl': {
\			'syn_name_prefix': 'perlBlockFoldRainbow', 
\		},
\		'stylus': {
\			'parentheses': ['start=/{/ end=/}/ fold contains=@colorableGroup'],
\		},
\		'css': 0,
\	}
\        }
let g:rainbow_active = 1
let g:rbpt_max = 16
let g:rbpt_loadcmd_toggle = 0



"vim-cpp-enhanced-highlight
let g:cpp_class_scope_highlight = 1
let g:cpp_class_decl_highlight = 1
let g:cpp_experimental_simple_template_highlight = 1
let g:cpp_experimental_template_highlight = 1
let g:cpp_concepts_highlight = 1

nmap <F2> :MRU<cr>

"nerdcommenter
let g:NERDCompactSexyComs        = 1
let g:NERDDefaultAlign           = 'left' 
let g:NERDAltDelims_java         = 1
let g:NERDCustomDelimiters       = {'c': {'left': '/*', 'right': '*/'}}
let g:NERDCommentEmptyLines      = 1
let g:NERDTrimTrailingWhitespace = 1
let g:NERDToggleCheckAllLines    = 1


vmap " S"
vmap ' S'
vmap ` S`
vmap [ S[
vmap ( S(
vmap { S{
vmap } S}
vmap ] S]
vmap ) S)
vmap < S<




call plug#begin('~/.config/nvim/plugged')
Plug 'mhinz/vim-startify'
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }
Plug 'mbbill/undotree/'
Plug 'jceb/vim-orgmode', {'for': ['vim-plug', 'org']}
Plug 'ryanoasis/vim-devicons'
Plug 'machakann/vim-highlightedyank'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
Plug 'vim-scripts/mru.vim'
Plug 'bling/vim-bufferline'
Plug 'bpietravalle/vim-bolt'
"Plug 'theniceboy/eleline.vim'
"Plug 'liuchengxu/eleline.vim'
"Plug 'itchyny/lightline.vim'
"airline
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'ojroques/vim-scrollstatus'
"---
Plug 'RRethy/vim-illuminate'
Plug 'RRethy/vim-hexokinase', { 'do': 'make hexokinase' }
Plug 'ajmwagar/vim-deus'
Plug 'rakr/vim-one'
Plug 'powerline/powerline'
Plug 'chrisbra/changesPlugin'
Plug 'skywind3000/asynctasks.vim'
Plug 'skywind3000/asyncrun.vim'
Plug 'chrisbra/Colorizer'
Plug 'jaxbot/semantic-highlight.vim'
Plug 'scrooloose/nerdcommenter'
Plug 'godlygeek/tabular'
Plug 'luochen1990/rainbow'
Plug 'octol/vim-cpp-enhanced-highlight'
Plug 'tpope/vim-surround'
Plug 'jiangmiao/auto-pairs'
Plug 'mg979/vim-xtabline'
Plug 'easymotion/vim-easymotion'
Plug 'Yggdroot/LeaderF', { 'do': './install.sh' }
Plug 'liuchengxu/vista.vim'
"Plug 'mg979/vim-visual-multi'
"markdown
Plug 'suan/vim-instant-markdown', {'for': 'markdown'}
Plug 'dhruvasagar/vim-table-mode', { 'on': 'TableModeToggle', 'for': ['text', 'markdown', 'vim-plug'] }
Plug 'mzlogin/vim-markdown-toc', { 'for': ['gitignore', 'markdown', 'vim-plug'] }
Plug 'dkarter/bullets.vim'
Plug 'kevinhwang91/rnvimr'
"---------
Plug 'pechorin/any-jump.vim'
Plug 'vim-utils/vim-man'
" HTML, CSS, JavaScript, PHP, JSON, etc.
Plug 'elzr/vim-json'
Plug 'hail2u/vim-css3-syntax', { 'for': ['vim-plug', 'php', 'html', 'javascript', 'css', 'less'] }
Plug 'spf13/PIV', { 'for' :['php', 'vim-plug'] }
Plug 'pangloss/vim-javascript', { 'for': ['vim-plug', 'php', 'html', 'javascript', 'css', 'less'] }
Plug 'yuezk/vim-js', { 'for': ['vim-plug', 'php', 'html', 'javascript', 'css', 'less'] }
Plug 'MaxMEllon/vim-jsx-pretty', { 'for': ['vim-plug', 'php', 'html', 'javascript', 'css', 'less'] }
Plug 'jelera/vim-javascript-syntax', { 'for': ['vim-plug', 'php', 'html', 'javascript', 'css', 'less'] }
call plug#end()
" === vim-instant-markdown
let g:instant_markdown_slow = 0
let g:instant_markdown_autostart = 0
let g:instant_markdown_autoscroll = 1

" === vim-table-mode
noremap <LEADER>tm :TableModeToggle<CR>
let g:table_mode_cell_text_object_i_map = 'k<Bar>'

" === Bullets.vim
let g:bullets_enabled_file_types = [
			\ 'markdown',
			\ 'text',
			\ 'gitcommit',
			\ 'scratch'
			\]

" === vim-markdown-toc
let g:vmt_cycle_list_item_markers = 1
let g:vmt_fence_text = 'TOC'
let g:vmt_fence_closing_text = '/TOC'

" === AsyncRun
noremap gp :AsyncRun git push<CR>


" === AsyncTasks
let g:asyncrun_open = 6

"vim-deus-----
"set termguicolors
"let $NVIM_TUI_ENABLE_TRUE_COLOR=1
if (empty($TMUX))
  if (has("nvim"))
  let $NVIM_TUI_ENABLE_TRUE_COLOR=1
  endif
  if (has("termguicolors"))
    set termguicolors
  endif
endif
"colors deus
let g:one_allow_italics = 1
set background=dark
colors one
hi NonText ctermfg=gray guifg=grey10


"eleline -----
"let g:airline_powerline_fonts = 1
"let g:eleline_powerline_fonts = 1

"illuminated---
let g:Illuminate_delay = 750
hi illuminatedWord cterm=undercurl gui=undercurl
"let g:Hexokinase_highlighters = ['virtual']


"xtabline-----
let g:xtabline_settings = {}
let g:xtabline_settings.enable_mappings = 0
let g:xtabline_settings.tabline_modes = ['tabs', 'buffers','arglist']
let g:xtabline_settings.enable_persistance = 0
let g:xtabline_settings.last_open_first = 1
"noremap to :XTabCycleMode<CR>
noremap \p :echo expand('%:p')<CR>


"coc--------------------------------------
let g:coc_global_extensions = [
    \ 'coc-html',
	\ 'coc-json',
	\ 'coc-lists',
	\ 'coc-css',
    \ 'coc-tslint-plugin',
    \ 'coc-stylelint',
	\ 'coc-vimlsp',
	\ 'coc-yaml',
	\ 'coc-xml',
    \ 'coc-translator',
	\ 'coc-tasks',
	\ 'coc-syntax',
	\ 'coc-explorer',
	\ 'coc-marketplace',
	\ 'coc-highlight',
    \ 'coc-pyright',
	\ 'coc-python',
	\ 'coc-diagnostic',
    \ 'coc-prettier',
    \ 'coc-tsserver']
inoremap <silent><expr> <TAB>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<TAB>" :
      \ coc#refresh()
inoremap <expr><S-TAB> pumvisible() ? "\<C-p>" : "\<C-h>"

function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~# '\s'
endfunction
inoremap <silent><expr> <c-o> coc#refresh()
nmap <silent> <LEADER>- <Plug>(coc-diagnostic-prev)
nmap <silent> <LEADER>= <Plug>(coc-diagnostic-next)
nmap <silent> gd <Plug>(coc-definition)
nmap <silent> gy <Plug>(coc-type-definition)
nmap <silent> gi <Plug>(coc-implementation)
nmap <silent> gr <Plug>(coc-references)
nnoremap <silent> <LEADER>h :call <SID>show_documentation()<CR>
function! s:show_documentation()
  if (index(['vim','help'], &filetype) >= 0)
    execute 'h '.expand('<cword>')
  else
    call CocAction('doHover')
  endif
endfunction
autocmd CursorHold * silent call CocActionAsync('highlight')
nnoremap <silent> ,y  :<C-u>CocList -A --normal yank<cr>
nmap ts <Plug>(coc-translator-p)
nmap <F3> :CocCommand explorer<CR>
nmap <LEADER>m :CocList marketplace<CR>
noremap <silent> <leader>ts :CocList tasks<CR>
inoremap <expr> <cr> complete_info()["selected"] != "-1" ? "\<C-y>" : "\<C-g>u\<CR>"
set statusline^=%{coc#status()}%{get(b:,'coc_current_function','')}
"----------------------------------


"fzf -------
set rtp+=~/.fzf
"noremap <C-p> :FZF<CR>
 noremap <silent> <C-f> :Files<CR>
noremap <silent> <C-f> :Leaderf file<CR>

let g:fzf_preview_window = 'right:60%'
let g:fzf_commits_log_options = '--graph --color=always --format="%C(auto)%h%d %s %C(black)%C(bold)%cr"'

function! s:list_buffers()
  redir => list
  silent ls
  redir END
  return split(list, "\n")
endfunction

function! s:delete_buffers(lines)
  execute 'bwipeout' join(map(a:lines, {_, line -> split(line)[0]}))
endfunction

command! BD call fzf#run(fzf#wrap({
  \ 'source': s:list_buffers(),
  \ 'sink*': { lines -> s:delete_buffers(lines) },
  \ 'options': '--multi --reverse --bind ctrl-a:select-all+accept'
\ }))


let g:fzf_layout = { 'window': { 'width': 0.9, 'height': 0.8 } }


"undotree-----

map L :UndotreeToggle<CR>
let g:undotree_DiffAutoOpen = 1
let g:undotree_SetFocusWhenToggle = 1
let g:undotree_ShortIndicators = 1
let g:undotree_WindowLayout = 2
let g:undotree_DiffpanelHeight = 8
let g:undotree_SplitWidth = 24
"function g:Undotree_CustomMap()
	"nmap <buffer> u <plug>UndotreeNextState
	"nmap <buffer> e <plug>UndotreePreviousState
	"nmap <buffer> U 5<plug>UndotreeNextState
	"nmap <buffer> E 5<plug>UndotreePreviousState
"endfunc



"colorizer-----
let g:colorizer_syntax = 1

"vim-easymotion
let g:EasyMotion_do_mapping = 0
let g:EasyMotion_do_shade = 0
let g:EasyMotion_smartcase = 1

" === tabular
vmap ga :Tabularize /

" === Leaderf
let g:Lf_PreviewInPopup = 1
let g:Lf_PreviewCode = 1
let g:Lf_ShowHidden = 1
let g:Lf_ShowDevIcons = 1
let g:Lf_CommandMap = {
\   '<C-k>': ['<C-u>'],
\   '<C-j>': ['<C-e>'],
\   '<C-]>': ['<C-v>'],
\   '<C-p>': ['<C-n>'],
\}

" === Vista.vim

noremap <LEADER>v :Vista coc<CR>
noremap <c-t> :silent! Vista finder coc<CR>
let g:vista_icon_indent = ["╰─▸ ", "├─▸ "]
let g:vista_default_executive = 'ctags'
let g:vista_fzf_preview = ['right:50%']
let g:vista#renderer#enable_icon = 1
let g:vista#renderer#icons = {
\   "function": "\uf794",
\   "variable": "\uf71b",
\  }

" === rnvimr
" ===
let g:rnvimr_ex_enable = 1
let g:rnvimr_pick_enable = 1
let g:rnvimr_draw_border = 0
" let g:rnvimr_bw_enable = 1
highlight link RnvimrNormal CursorLine
nnoremap <silent> R :RnvimrToggle<CR><C-\><C-n>:RnvimrResize 0<CR>
let g:rnvimr_action = {
            \ '<C-t>': 'NvimEdit tabedit',
            \ '<C-x>': 'NvimEdit split',
            \ '<C-v>': 'NvimEdit vsplit',
            \ 'gw': 'JumpNvimCwd',
            \ 'yw': 'EmitRangerCwd'
            \ }
let g:rnvimr_layout = { 'relative': 'editor',
            \ 'width': &columns,
            \ 'height': &lines,
            \ 'col': 0,
            \ 'row': 0,
            \ 'style': 'minimal' }
let g:rnvimr_presets = [{'width': 1.0, 'height': 1.0}]

"anyjump
nnoremap <LEADER>j :AnyJump<CR>

"changesPlugin
let g:changes_autocmd=1
let g:changes_use_icons = 1
let g:changes_linehi_diff = 0
"vim-man
map <leader>m <Plug>(Man)
"statusline
"airline 
let g:airline#extensions#tabline#enabled = 1
set t_Co=256
let g:airline_theme="violet"
"let g:airline_theme="bubblegum"
let g:airline_powerline_fonts                   = 1 " 使用 powerline 打过补丁的字体
let g:airline#extensions#tabline#buffer_nr_show = 1 " 显示 buffer 编号
set laststatus=2
let g:airline#extensions#tabline#enabled = 1

" 关闭当前 buffer
noremap <C-x> :w<CR>:bd<CR>
" <leader>1~9 切到 buffer1~9
map <leader>1 :b 1<CR>
map <leader>2 :b 2<CR>
map <leader>3 :b 3<CR>
map <leader>4 :b 4<CR>
map <leader>5 :b 5<CR>
map <leader>6 :b 6<CR>
map <leader>7 :b 7<CR>
map <leader>8 :b 8<CR>
map <leader>9 :b 9<CR>
if !exists('g:airline_symbols')
	let g:airline_symbols = {}
endif
let g:airline_left_sep          = '⮀'
let g:airline_left_alt_sep      = '⮁'
let g:airline_right_sep         = '⮂'
let g:airline_right_alt_sep     = '⮃'
let g:airline_symbols.crypt     = '?'
let g:airline_symbols.linenr    = '⭡'
let g:airline_symbols.branch    = '⭠'
let g:powerline_pycmd="py3"
